# Truy vấn đường đi ngắn nhất
time limit per second : 1.0 second

memory limit per test : 256 megabytes

Có $n$ thành phố và $m$ con đường giữa chúng. Ta cần tìm:
- Chi phí đường đi ngắn nhất.
- Số đường đi ngắn nhất ( mod cho $1e9 + 7$ ).
- Số cạnh của đường đi ngắn nhất có ít đỉnh nhất.
- Số cạnh của đường đi ngắn nhất nhiều đỉnh nhất.

## Input
Dòng đầu là các số nguyên dương $n$, $m$ ($1 \leq n \leq 10^5$, $1 \leq m \leq 2.10^5$).

$m$ dòng tiếp theo là các số $u$, $v$, $w$ thể hiện con đường một chiều nối từ $u$ đến $v$ có độ dài $w$ ($1 \leq u$, $v \leq n$, $1 \leq w \leq 10^9$).

## Output
$4$ số nguyên theo yêu cầu cách nhau một dấu cách.

### Example
#### input
```
4 5
1 4 5
1 2 4
2 4 5
1 3 2
3 4 3
```

#### output
```
5 2 1 2
```