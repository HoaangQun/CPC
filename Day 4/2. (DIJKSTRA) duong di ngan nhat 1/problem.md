# Đường đi ngắn nhất 1
time limit per second : 1.0 second

memory limit per test : 256 megabytes

Có $n$ thành phố và $m$ con đường giữa chúng, nhiệm vụ là xác định độ dài tuyến đường ngắn nhất nối thành phố $1$ đến các thành phố khác.

## Input
Dòng đầu là các số nguyên dương $n$, $m$ ($1 \leq n$, $m \leq 2.10^5$).

$m$ dòng tiếp theo là các số $u$, $v$, $w$ thể hiện con đường nối từ $u$ đến $v$ có độ dài $w$ ($1 \leq u$, $v \leq n$, $1 \leq w \leq 10^9$).

## Output
In ra $n$ số nguyên là độ dài tuyến đường ngắn nhất nối từ thành phố $1$ đến thành phố $1$ và các thành phố còn lại.

### Example
#### input
```
3 4
1 2 6
1 3 2
3 2 3
1 3 4
```

#### output
```
0 5 2
```

