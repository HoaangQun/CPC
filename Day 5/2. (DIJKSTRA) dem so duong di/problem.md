# Số đường đi ngắn nhất
time limit per second : 1.0 second

memory limit per test : 256 megabytes

Có $n$ thành phố và $m$ con đường giữa chúng, đếm số đường đi ngắn nhất từ đỉnh $1$ đến $n$.

## Input
Dòng đầu là các số nguyên dương $n$, $m$ ($1 \leq n$, $m \leq 2.10^5$).

$m$ dòng tiếp theo là các số $u$, $v$, $w$ thể hiện con đường nối từ $u$ đến $v$ có độ dài $w$ ($1 \leq u$, $v \leq n$, $1 \leq w \leq 10^9$).

## Output
In ra số đường đi ngắn nhất từ đỉnh $1$ đến đỉnh $n$ sau khi chia lấy dư cho $1e9 + 7$

### Example
#### input
```
7 9
1 2 10
2 4 1
2 3 5
3 4 2
3 5 3
3 6 2
1 7 18
5 7 3
6 7 3
```

#### output
```
2
```
