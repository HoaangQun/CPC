# Đường đi trên lưới
time limit per second : 1.0 second

memory limit per test : 256 megabytes

Cho một lưới kích thước $n$ x $n$, một vài ô có bẫy và không thể bước vào.

Hãy tính số đường đi từ ô ($1$, $1$) đến ô ($n$, $n$).

## Input
Dòng đầu là số nguyên dương $n$ ($n \leq 1000$)

$n$ dòng tiếp theo mỗi dòng là $n$ kí tự '.' và '*' (bẫy)

## Output
In ra số đường đi từ ô ($1$, $1$) đến ô ($n$, $n$) chia dư cho $10^9 + 7$.

### Example
#### input
```
4
....
.*..
...*
*...
```

#### output
```
3
```
