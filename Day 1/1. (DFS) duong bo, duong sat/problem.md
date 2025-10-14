# Đường Bộ - Đường Sắt

time limit per second : 1.0 second

memory limit per test : 256 megabytes

Đất nước Free Contest gồm $n$ thành phố. Có $m$ tuyến đường bộ và $l$ tuyến đường sắt, các tuyến đường đều là đường hai chiều. Tuyến đường bộ thứ $i$ nối hai thành phố $u_i$ và $v_i$, tuyến đường sắt thứ $i$ nối hai thành phố $x_i$ và $y_i$. Không có hai tuyến đường bộ nào nối cùng một cặp thành phố. Tương tự, không có hai tuyến đường sắt nào nối cùng một cặp thành phố.

Hai thành phố $s$ và $t$ được gọi là liên thông bằng đường bộ nếu có thể đi từ $s$ đến $t$ chỉ bằng các tuyến đường bộ. Tương tự, hai thành phố $s$ và $t$ được gọi là liên thông bằng đường sắt nếu có thể đi từ $s$ đến $t$ chỉ bằng các tuyến đường sắt.

Với mỗi thành phố $u$, hãy cho biết có bao nhiêu thành phố $v$ sao cho:

- $u$ và $v$ liên thông bằng đường bộ.
- $u$ và $v$ liên thông bằng đường sắt.

Theo định nghĩa trên, mỗi thành phố đều liên thông bằng đường bộ và liên thông bằng đường sắt với chính nó.

## Input
Dòng đầu tiên ghi một số nguyên dương $n$, $m$, $l$ ($n$ , $m$ , $l$ $\leq$ $200000$).

$m$ dòng tiếp theo, dòng thứ $i$ gồm hai số nguyên dương $u_i$ và $v_i$ ($u_i$ < $v_i$) - tuyến đường bộ thứ $i$.

$l$ dòng tiếp theo, dòng thứ $i$ gồm hai số nguyên dương $x_i$ và $y_i$ ($x_i$ < $y_i$) - tuyến đường sắt thứ $i$.

Subtask 1 (30% số điểm): $n$ , $m$ , $l$ $\leq$ $2000$.

Subtask 2 (70% số điểm): Không có ràng buộc gì thêm.

## Output
In ra N số nguyên, số nguyên thứ $i$ là số thành phố liên thông bằng đường bộ và liên thông bằng đường sắt với thành phố thứ $i$.

### Example
#### input
```
4 3 2
1 2
1 3
1 4
2 4
3 4
```
#### output
```
1 3 3 3
```

#### input
```
7 6 4
1 4
4 2
2 3
5 6
6 7
7 5
1 2
4 3
4 5
3 5
```
#### output
```
2 2 2 2 1 1 1
```
