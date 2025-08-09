-- 코드를 입력하세요
## 요구 사항
## 음식종류별로 즐겨찾기 수가 가장 많은 식당의 음식 종류, 식당 이륾, 즐겨찾기 수 조회
## 결과는 음식 종류를 기준으로 내림차순 정렬 
SELECT FOOD_TYPE, REST_ID, REST_NAME, FAVORITES
FROM REST_INFO
WHERE FAVORITES IN (SELECT MAX(FAVORITES)
                  FROM REST_INFO
                  GROUP BY FOOD_TYPE)
GROUP BY FOOD_TYPE
ORDER BY FOOD_TYPE DESC;