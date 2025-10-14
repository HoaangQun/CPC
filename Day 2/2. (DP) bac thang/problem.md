# Bậc thang

time limit per second : 1.0 second

memory limit per test : 256 megabytes

Có $n$ bậc thang. Ban đầu ta đứng ở bậc thang số $1$. Mỗi lần di chuyển ta có thể bước lên $1$ hoặc $2$ bậc thang. Biết rằng trong $n$ bậc thang có $k$ bậc thang bị hòng không thể bước vào (bật thang $1$ không bao giờ hỏng).

## Input
Dòng đầu ghi $2$ số nguyên $n$, $k$ ($0 \leq k < n \leq 10^6$).

Dòng thứ hai ghi $k$ số nguyên chỉ các bậc đã hỏng.

## Output
In ra một số duy nhất là cách đi đến bậc thứ $n$ (chia lấy dư cho $10^9 + 7$)

### Example
#### input
```
4 2
2 3
```
#### output
```
0
```

#### input
```
5 1
2
```
#### output
```
2
```
