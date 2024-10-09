#### Routh-Hurwitz Stability
$$\text{is the following system stable?}$$
$$A(s)=2s^4+s^3+3s^2+5s+10$$
$$\begin{bmatrix}
s^4 & 2 & 3 & 10 & 0\\
s^3 & 1 & 5 & 0 \\
s^2 & -7 & 10 \\
s & c1 & c2 \\
s^0 & 10
\end{bmatrix}$$
$$c1 = \frac{(-7)(5)-(10)(1)}{-7} = \frac{45}{7}$$
$$c1 = \frac{(-7)(5)-(10)(1)}{-7} = \frac{45}{7}$$
---


$$\begin{bmatrix}
s^3 & 1 & 17.25 & 0 \\
s^2 & 7 & 50 & 0 \\
s^1 & b1 \\
s^0 & c1
\end{bmatrix}$$
$$c1 = \frac{(7)(17.25)-(1)(50)}{7} = \frac{70.75}{7}$$
---
#### Special cases 1
$$A(s)=s^3+2s^2+s+2$$
$$\begin{bmatrix}
s^3 & 1 & 1 & 0 \\
s^2 & 2 & 2 & 0 \\
s^1 & 0=\epsilon \\
s^0 & 2
\end{bmatrix}$$
----
$$A(s)=s^3+2s^2+s+2$$
$$\begin{bmatrix}
s^3 & 1 & -3 & 0 \\
s^2 & 0=\epsilon & 2 & 0 \\
s^1 & ? \\
s^0 & ?
\end{bmatrix}$$
---
##### Special cases 2
$$A(s)=s^3+2s^2+s+2$$
$$\begin{bmatrix}
s^5 & 1 & 24 & -25 \\
s^4 & 2 & 48 & -50 \\
s^3 & 8 & 96 & 0 \\
s^2 & 24 & -50 \\
s^1 & 112.7 & 0\\
s^0 & -50
\end{bmatrix}$$
- Auxiliary polynomial is used when the whole row is 0's.
- Meaning the row above the row of 0's.
- 