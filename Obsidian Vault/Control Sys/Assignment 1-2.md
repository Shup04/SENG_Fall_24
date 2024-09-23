## Part A:
#### Bradley Schmidt (T00711584)
$$L(s)=\frac{(s^2+3s+10)(s+5)}{(s+3)(s+4)(s^2+2s+100)} = \frac{A}{s+3} + 
\frac{B}{s+4} + \frac{Cs+D}{s^2+2s+100}$$
$$(s^2+3s+10)(s+5) = A(s+4)(s^2+2s+100) + B(s+3)(s^2+2s+100)+ (Cs+D)(s+3)(s+4)$$
$$(s^3+8s^2+25s+50) = A(s+4)(s^2+2s+100) + B(s+3)(s^2+2s+100)+ (Cs+D)(s+3)(s+4)$$
#### RHS:
$$A(s^3+6s^2+108s+400) + B(s^3+5s^2+106s+300)+
(Cs+D)(s^2+7s+12)$$
$$As^3+6As^2+108As+400A + Bs^3+5Bs^2+106Bs+300B) +
Cs^3+7Cs^2+12Cs + Ds^2+7Ds+12D$$
$$s^3(A+B+C) + s^2(6A+5B+7C+D) + s(108A+106s+12C+7D) + (400A+300B+12D)$$
#### Equations:
$$1=A+B+C$$ $$8 = 6A+5B+7C+D$$ $$25=108A+106B+12C+7D$$ $$50=400A+300B+12D$$
Solve for variables 
$$\begin{bmatrix}
1 & 1A & 1B & 1C & 0D\\
8 & 6A & 5B & 7C & 1D\\
25 & 108A & 106B & 12C & 7D\\
50 & 400A & 300B & 0C & 12D
\end{bmatrix}$$

$$A=\frac{20}{103}, B=\frac{-7}{54}, C=\frac{5203}{5562}, D=\frac{2600}{2781}$$
$$L(s)=\frac{20}{103(s+3)} - \frac{7}{54(s+4)} + (Cs+D)\frac{1}{(s+1)^2+99}$$
$$Cs + D = C(s+1) - C + D$$
$$Cs + D = C(s+1) - \frac{1}{1852}$$
$$L(s)=\frac{20}{103(s+3)} - \frac{7}{54(s+4)} + \biggr(
\frac{5203}{5562}\frac{s+1}{(s+1)^2+99} - \frac{1}{1852}\frac{1}{(s+1)^2+99} \biggr)$$
Un-laplace now:
$$F(t)=\frac{20}{103}e^{-3t} - \frac{7}{54}e^{-4t} + 
\frac{5203}{5562}e^{-t}\cos(\sqrt{99}t) - 
\frac{1}{1852}\frac{1}{\sqrt{99}}e^{-t}\sin(\sqrt{99}t) $$


## Part B:
#### Bradley Schmidt (T00711584)
$$L(s) = \frac{s^3+4s^2+2s+6}{(s+8)(s^2+8s+3)(s^2+5s+7)}$$
$$ = \frac{A}{s+8} + \frac{Bs+C}{s^2+8s+3} + \frac{Ds+E}{s^2+5s+7}$$
$$ = {A(s^2+8s+3)(s^2+5s+7)} + (Bs+C)(s+8)(s^2+5s+7) + (Ds+E)((s+8)(s^2+8s+3)$$
$$ = A(s^4 + 13s^3 + 40s^2 + 71s + 21) +
(Bs+C)(s^3 + 13s^2 + 47s + 56) +
(Ds+E)(s^3 + 16s^2 + 67s + 24)$$
$$= s^4(A + B + D) + s^3(13A +13B + C + 16D + E) + s^2(50A + 47B + 13C + 67D + 16E) + s(71A + 56B + 47C + 24D + 67E) + (21A + 56C + 24E)$$
#### Equations:
$$A = -\frac{266}{93}$$
$$0 = A+B+D$$
$$1=13A+13B+C+16D+E$$
$$4=50A+47B+13C+67D+16E$$
$$2 = 71A + 56B + 47C + 24D + 67E$$
$$6 = 21A + 56C + 24E$$
$$\begin{bmatrix}
-\frac{266}{93} & A & 0B & 0C & 0D & 0E\\
0 & A & B & C & 0D & 0E\\
1 & 13A & 13B & C & 16D & 16E\\
4 & 50A & 47B & 13C & 67D & 16E\\
2 & 71A & 56B & 47C & 24D & 67E\\
6 & 21A & 0B & 56C & 0D & 24E\\
\end{bmatrix}$$
$$A=-\frac{266}{93}, B=\frac{1199}{417}, C=\frac{2091}{1729}, D=-\frac{170}{19083}, E=-\frac{40}{211}$$
$$ = \frac{-266}{93} \frac{1}{s+8} + \biggr( \frac{1199}{417}s+\frac{2091}{1729} \biggr)\frac{1}{(s+4)^2 - 13} + 
\biggr(\frac{-170}{19083}s-\frac{40}{211}\biggr)\frac{1}{(s+2.5)^2 + 0.75}$$
$$ = \frac{-266}{93} \frac{1}{s+8} + 
\biggr( Bs+C \biggr)\frac{1}{(s+4)^2 - 13} + 
\biggr(Ds-E\biggr)\frac{1}{(s+2.5)^2 + 0.75}$$
#### First Term:
$$-\frac{266}{93}e^{-8t}$$

#### Second Term:
$$\biggr( Bs+C \biggr)\frac{1}{(s+4)^2 - 13}$$
$$\frac{1199}{417}\frac{(s+4)}{(s+4)^2 - 13} + \frac{2091}{1729}\frac{1}{(s+4)^2 - 13}$$
$$Bs+C = B(s + 4) - 4B + C = \frac{1199}{417}(s+4) - \frac{1029}{100}$$
$$\frac{1199}{417}\cosh(\sqrt{13}t) + \frac{2091}{1729}\frac{\sinh(\sqrt{13}t)}{\sqrt{13}}$$
#### Third Term:
$$\biggr(Ds-E\biggr)\frac{1}{(s+2.5)^2 + 0.75}$$
$$Ds+E = D(s + 2.5) - 2.5D + E = $$
$$\biggr(-\frac{170}{19083}\biggr)\frac{s+2.5}{(s+2.5)^2 + 0.75} + \biggr(-\frac{40}{211}\biggr)\frac{1}{(s+2.5)^2 + 0.75}$$
$$-\frac{170}{19083}\cosh(\sqrt{0.75}t) - \frac{40}{211}\frac{\sinh(\sqrt{0.75}t)}{\sqrt(0.75)}$$
#### Final Answer:

$$ f(t) = 
-\frac{266}{93}e^{-8t} + 
\frac{1199}{417}\cosh(\sqrt{13}t) + \frac{2091}{1729}\frac{\sinh(\sqrt{13}t)}{\sqrt{13}} -
\frac{170}{19083}\cosh(\sqrt{0.75}t) - \frac{40}{211}\frac{\sinh(\sqrt{0.75}t)}{\sqrt{0.75}}
$$
