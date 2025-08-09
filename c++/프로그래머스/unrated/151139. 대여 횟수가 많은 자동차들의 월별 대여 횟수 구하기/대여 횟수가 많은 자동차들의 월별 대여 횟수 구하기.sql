## 요구사항
## 대여 시작일을 기준으로 2022년 8 ~ 10월 까지 총 대여 횟수가 5회 이상인 자동차들 
## 월별 자동차 ID별 총 대여 횟수 리스트 출력
## 결과는 월 기준 오름차순, 같다면 자동차 ID를 기준으로 내림차순 정렬 
-- 코드를 입력하세요
SELECT MONTH(START_DATE) AS MONTH, CAR_ID, COUNT(CAR_ID) AS RECORDS
  FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY
  WHERE CAR_ID IN (SELECT CAR_ID
                         FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY
                         WHERE START_DATE BETWEEN '2022-08-01' AND '2022-10-31'
                         GROUP BY CAR_ID
                         HAVING COUNT(*)>=5)
  AND START_DATE BETWEEN '2022-08-01' AND '2022-10-31'
  GROUP BY MONTH, CAR_ID
  ORDER BY MONTH ASC, CAR_ID DESC;