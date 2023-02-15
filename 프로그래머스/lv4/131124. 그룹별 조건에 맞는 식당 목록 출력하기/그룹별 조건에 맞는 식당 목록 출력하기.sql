-- 코드를 입력하세요
SELECT P.MEMBER_NAME, R.REVIEW_TEXT, DATE_FORMAT(R.REVIEW_DATE, '%Y-%m-%d') AS REVIEW_DATE
FROM REST_REVIEW R
INNER JOIN MEMBER_PROFILE P
ON P.MEMBER_ID = R.MEMBER_ID
WHERE R.MEMBER_ID = (SELECT MEMBER_ID FROM REST_REVIEW GROUP BY MEMBER_ID ORDER BY COUNT(REVIEW_TEXT) DESC LIMIT 1)
ORDER BY REVIEW_DATE ASC, REVIEW_TEXT ASC;