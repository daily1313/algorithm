-- 요구 사항

# -- 1. 2021년에 가입한 회원을 대상으로 함
# -- 2. 상품의 구매 인원과, 2021년 가입자 대비 구매 인원의 비율 집계
# -- 3. 비율은 소수점 두번째 자리에서 반올림해야 함
# -- 4. 위의 데이터를 각 연도-월 별로 집계 
# -- 5. 연도-월 별로 오름차순 순차 정렬 할 것

SELECT
    -- 결제 정보에서 연도와 월을 컬럼으로 가져온다
    YEAR(O.SALES_DATE) AS YEAR,
    MONTH(O.SALES_DATE) AS MONTH,
    -- 결제 정보에 기록된 USER_ID의 고유값 집계 (결제 회원의 수)
    count(DISTINCT O.USER_ID) AS PURCHASED_USERS,
    -- 이용자 정보의 수(전체 이용자 수)를 결제 회원의 수로 나눈 것 (전체 이용자 대비 결제 회원의 비율)
    round (count(DISTINCT O.USER_ID) / 
           -- 서브 쿼리를 이용하여 그룹화 되지 않은 테이블의 2021년 총 가입자수를 가져온다
           (SELECT count(USER_ID) 
            FROM USER_INFO I
            WHERE YEAR(I.JOINED) = 2021),1) AS PURCHASED_RATIO

-- USER_ID 컬럼을 기준으로 이용자 정보와 결제 정보 테이블을 INNER JOIN
FROM ONLINE_SALE O 
JOIN USER_INFO I
ON O.USER_ID = I.USER_ID

-- 가입일이 2021년인 회원만 JOIN
WHERE YEAR(I.JOINED) = 2021

# -- 각 (결제) 월별로 집계 (연도를 따로 집계할 필요 없음)
GROUP BY MONTH

-- 연도와 월별로 순차 정렬
ORDER BY YEAR ASC, MONTH ASC