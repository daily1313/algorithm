-- 코드를 입력하세요
## 요구사항
## 식품분류별로 가격이 제일 비싼 식품의 분류, 가격, 이름 조회
## 식품분류가 과자 국 김치 식용유인 경우만 출력
## 결과 식품 가격을 기준으로 내림차순 정렬
SELECT CATEGORY, PRICE AS MAX_PRICE, PRODUCT_NAME
FROM FOOD_PRODUCT
WHERE CATEGORY IN('과자', '국', '김치', '식용유') AND PRICE IN (SELECT MAX(PRICE) FROM FOOD_PRODUCT GROUP BY CATEGORY)
GROUP BY CATEGORY, PRODUCT_NAME
ORDER BY PRICE DESC;