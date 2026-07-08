# Write your MySQL query statement below
SELECT a.category AS category1, b.category AS category2,
COUNT(DISTINCT a.user_id) AS customer_count
FROM( SELECT DISTINCT pp.user_id, pi.category
    FROM ProductPurchases pp
    JOIN ProductInfo pi
    ON pp.product_id = pi.product_id) 
a JOIN
(
    SELECT DISTINCT pp.user_id, pi.category
    FROM ProductPurchases pp
    JOIN ProductInfo pi
    ON pp.product_id = pi.product_id
) b
ON a.user_id = b.user_id AND a.category < b.category
GROUP BY a.category, b.category HAVING COUNT(DISTINCT a.user_id) >= 3 ORDER BY customer_count DESC, category1 ASC, category2 ASC;