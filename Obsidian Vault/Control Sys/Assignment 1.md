(A) Bradley Schmidt (T00711584)
$$L(s) =  \int_{0}^{inf} u(t) * e^{-st} \,dt$$
$$\int_{0}^{inf} 1*e^{-st} \,dt$$
$$\frac{e^{-st}}{-s} \, \biggr|_{0}^{inf}$$
$$\frac{e^{-\inf}}{-s} - \frac{e^{0}}{-s}$$
$$\frac{1}{s}$$
(B) Bradley Schmidt (T00711584)
$$L(s) =  \int_{0}^{inf} tu(t) * e^{-st} \,dt$$
$$\int_{0}^{inf} t * e^{-st} \,dt$$
$$\int u\,dv = uv − \int v\,du$$
$$\frac{te^{-st}}{-s}\biggr|_{0}^{\inf} - \int_{0}^{\inf} \frac{e^{-st}}{-s}\,dt$$
$$ 0 - \frac{1}{-s} \int_{0}^{\inf} e^{-st}\,dt$$
$$\frac{1}{s} * \frac{1}{s} = \frac{1}{s^2}$$
(C) Bradley Schmidt (T00711584)
$$L(s) =  \int_{0}^{inf} sin(at)u(t) * e^{-st} \,dt$$

$$\int_{0}^{inf} sin(at) * e^{-st} \,dt$$
$$\int_{0}^{\inf} u\,dv = uv - \int_{0}^{\inf} v\,du$$
$$\frac{\sin(at)e^{-st}}{-s}\biggr|_{0}^{\inf} - 
\frac{a}{-s}\int_{0}^{\inf} e^{-st}\cos(at)\,dt $$
$$0 + 
\frac{a}{s}\int_{0}^{\inf} e^{-st}\cos(at)\,dt $$
$$\int_{0}^{\inf} u\,dv = uv - \int_{0}^{\inf} v\,du$$
$$\frac{a}{s}\biggr( \frac{cos(at)e^{-st}}{-s} \biggr|_{0}^{\inf} +
\frac{a}{s}\int_{0}^{\inf} e^{-st} \sin(at)\,dt \biggr)$$
$$L(s) = \frac{a}{s}\biggr( \frac{1}{-s} + \frac{a}{s}L(s) \biggr)$$
$$L(s) = \frac{a}{-s^2} + \frac{a^2}{s^2}L(s)$$

$$L(s) \biggr(1 - \frac{a^2}{s^s}\biggr) = \frac{a}{-s^2} $$
$$ L(s) = \frac{a}{s^2+a^2} $$
(D) Bradley Schmidt (T00711584)
$$L(s) =  \int_{0}^{inf} \cos(at)u(t) * e^{-st} \,dt$$
$$L(s) =  \int_{0}^{inf} \cos(at) * e^{-st} \,dt$$
$$\int_{0}^{\inf} u\,dv = uv - \int_{0}^{\inf} v\,du$$
$$cos(at)\frac{e^{-st}}{-s}\biggr|_{0}^{\inf} - \int_{0}^{\inf}
\frac{e^{-st}}{-s} -a\sin(at) \,dt$$
$$\frac{1}{s} - \frac{a}{s}\int_{0}^{\inf}
e^{-st} \sin(at) \,dt$$
$$\int_{0}^{\inf} u\,dv = uv - \int_{0}^{\inf} v\,du$$
$$\frac{1}{s} - \frac{a}{s}\biggr(
sin(at)\frac{e^{-s}}{-s}\biggr|_{0}^{\inf} - \int_{0}^{\inf} \frac{e^{-st}}{-s}a\cos(at)\,dt\biggr)$$
$$\frac{1}{s} - \frac{a}{s}\biggr(
sin(at)\frac{e^{-s}}{-s}\biggr|_{0}^{\inf} + \frac{a}{s} \int_{0}^{\inf} e^{-st}\cos(at)\,dt\biggr)$$
$$L(s) = \frac{1}{s} - \frac{a}{s}\biggr(\frac{a}{s} L(s)\biggr)$$
$$L(s) = \frac{1}{s} - \frac{a^2}{s^2} L(s)$$
$$L(s)\biggr(1 + \frac{a^2}{s^2} \biggr)= \frac{1}{s}$$
$$L(s) =  \frac{s}{a^2 + s^2}$$
(E) Bradley Schmidt (T00711584)
$$L(s) =  \int_{0}^{inf} e^{-bt} \cos(at)u(t) * e^{-st} \,dt$$$$L(s) =  \int_{0}^{inf} \cos(at) * e^{-(s+b)t} \,dt$$
$$\int_{0}^{\inf} u\,dv = uv - \int_{0}^{\inf} v\,du$$
$$cos(at)\frac{e^{-t(s+b)}}{-(s+b)}\biggr|_{0}^{\inf} + \int_{0}^{\inf} \frac{e^{-t(s+b)}}{-(s+b)} a\sin(at)\,dt$$
$$\frac{1}{(s+b)} - \frac{a}{s+b} 
\int_{0}^{\inf} e^{-t(s+b)} \sin(at)\,dt$$
$$\int_{0}^{\inf} u\,dv = uv - \int_{0}^{\inf} v\,du$$
$$\frac{1}{(s+b)} - \frac{a}{s+b} 
\biggr(\sin(at)\frac{e^{-t(s+b)}}{-(s+b)}\biggr|_{0}^{\inf} - \int_{0}^{\inf}\frac{e^{-t(s+b)}}{-(s+b)} a\cos(at)\,dt\biggr)$$
$$\frac{1}{(s+b)} - \frac{a}{s+b} \frac{a}{s+b} 
\biggr(\int_{0}^{\inf} e^{-t(s+b)} a\cos(at)\,dt\biggr)$$
$$L(s) = \frac{1}{(s+b)} - \frac{a^2}{(s+b)^2} (L(s))$$
$$L(s)( 1 + \frac{a^2}{(s+b)^2} ) = \frac{1}{(s+b)}$$
$$L(s)\biggr(\frac{(s+b)^2 + a^2}{(s+b)^2} \biggr) = \frac{1}{(s+b)}$$
$$L(s) = \frac{(s+b)}{(s+b)^2 + a^2}$$