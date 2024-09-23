#### Part 1:
Bradley Schmidt (T00711584)
$$\frac{d^3y}{dt^3} + 3\frac{d^2y}{dt^2} + 5\frac{dy}{dt} = 
\frac{d^3x}{dt^3} + 4\frac{d^2x}{dt^2} + 6\frac{dx}{dt} + 8x$$
$$s^3Y(s) + 3s^2Y(s) + 5sY(s) = s^3X(s) + 4s^2X(s) + 6sX(s) + 8X(s)$$
$$Y(s)\biggr(s^3 + 3s^2 + 5s\biggr) = X(s)\biggr(s^3 + 4s^2 + 6s + 8\biggr)$$
$$\boxed{H(s) = \frac{Y(s)}{X(s)} = \frac{s^3 + 4s^2 + 6s + 8}{s^3 + 3s^2 + 5s}}$$

#### Part 2:
Bradley Schmidt (T00711584)
###### (a)
$$\frac{X(s)}{F(s)} = \frac{7}{s^2 + 5s + 10}$$
$$X(s)\biggr(s^2+5s+10\biggr) = 7F(s)$$$$s^2X(s)+5sX(s)+10X(s) = 7F(s)$$
$$\boxed{\frac{d^2x}{dt^2} + 5\frac{dx}{dt} + 10x = 7f}$$
###### (b)
$$\frac{X(s)}{F(s)} = \frac{15}{(s+10)(s+11)}$$
$$X(s)(s+10)(s+11) = 15F(s)$$
$$X(s)(s^2 + 21s + 110) = 15F(s)$$
$$s^2X(s) + 21sX(s) + 110X(s) = 15F(s)$$
$$\boxed{\frac{d^2x}{dt^2} + 21\frac{dx}{dt} + 110x = 15f}$$
###### (c)
$$\frac{X(s)}{F(s)} = \frac{s+3}{s^3+11s^2+12s+18}$$
$$X(s)(s^3+11s^2+12s+18) = F(s)(s+3)$$
$$s^3X(s)+11s^2X(s)+12sX(s)+18X(s) = sF(s)+3F(s)$$
$$\boxed{\frac{d^3x}{dt^3} + 11\frac{d^2x}{dt^2} + 12\frac{dx}{dt} + 18x = 
\frac{df}{dt} + 3f}$$

#### Part 3:
Bradley Schmidt (T00711584)
$$\frac{C(s)}{R(s)} = \frac{s^4+3s^3+2s^2+s+1}{s^5+4s^4+3s^3+2s^2+3s+2}$$
$$R(s)(s^4+3s^3+2s^2+s+1) = C(s)(s^5+4s^4+3s^3+2s^2+3s+2)$$
$$s^4R(s)+3s^3R(s)+2s^2R(s)+sR(s)+R(s) = s^5C(s)+4s^4C(s)+3s^3C(s)+2s^2C(s)+3sC(s)+2C(s)$$
$$\frac{d^5c}{dt^5}+4\frac{d^4c}{dt^4}+3\frac{d^3c}{dt^3}+2\frac{d^2c}{dt^2}+3\frac{dc}{dt} + 2c(t) =
\frac{d^4r}{dt^4}+3\frac{d^3r}{dt^3}+2\frac{d^2r}{dt^2}+\frac{dr}{dt} + r(t)$$
$$r(t) = 3t^3, \frac{dr}{dt}=9t^2, \frac{d^2r}{dt^2}=18t, \frac{d^3r}{dt^3}=18 $$
$$\boxed{\frac{d^5c}{dt^5}+4\frac{d^4c}{dt^4}+3\frac{d^3c}{dt^3}+2\frac{d^2c}{dt^2}+3\frac{dc}{dt} + 2c(t) =
54 + 36t + 27t^2 +6t^3}$$
