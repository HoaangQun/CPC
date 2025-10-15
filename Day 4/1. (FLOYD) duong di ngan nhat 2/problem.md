# Đường đi ngắn nhất 2
time limit per second : 1.0 second

memory limit per test : 256 megabytes

Có $n$ thành phố và $m$ con đường giữa chúng, nhiệm vụ là xử lí $q$ truy vấn để xác định khoảng cách ngắn nhất giữa một cặp thành phố cho trước.

## Input
Dòng đầu là các số nguyên dương $n$, $m$, $q$ ($1 \leq n \leq 500$, $1 \leq m \leq n^2$, $1 \leq q \leq 10^5$).

$m$ dòng tiếp theo, mỗi dòng là các số nguyên $a$, $b$, $c$ thể hiện cho tuyến đường độ dài $c$ nối cặp thành phố $a$, $b$ ($1 \leq a \leq b \leq n$, $1 \leq c \leq 10^9).

Cuối cùng có $q$ truy vấn với dòng là một cặp thành phố $a$, $b$ ($1 \leq a \leq b \leq n$).

## Output
In ra độ dài của đường đi ngắn nhất nối giữa chúng, nếu cặp không thể nối in ra $-1$.

### Example
#### input
```
4 3 5
1 2 5
1 3 9
2 3 3
1 2
2 1
1 3
1 4
3 2
```

#### output
```
5
5
8
-1
3
```

