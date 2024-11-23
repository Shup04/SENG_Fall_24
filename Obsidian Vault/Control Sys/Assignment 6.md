#### Bradley D. Schmidt (T00711584)
##### 1. Find the analytical expressions for the magnitude and phase response for each G(s) below.
###### A.
$$G(s)=\frac{1}{s(s+2)(s+4)}, H(s)=1$$
$$|G(s)|=\frac{1}{|jw|*|jw+2|*|jw+4|}$$
###### Magnitude:
$$20log_{10}|G(s)|=20log_{10}\biggr(w^{-1} * (w^2+4)^{-\frac12} * (w^2+16)^{-\frac12} \biggr)$$
$$\boxed{20log_{10}|G(s)|=-20log_{10}(w) - 10log_{10}(w^2+4) - 10log_{10}(w^2+16)}$$
###### Phase:
$$\angle{G(jw)} = -\biggr(\angle{(jw)} + \angle{(jw+2)} + \angle{(jw+4)}\biggr)$$
$$\boxed{\angle{G(jw)} = -\biggr(90^{\circ} + tan^{-1}(\frac{w}{2}) + tan^{-1}(\frac{w}{4})\biggr)}$$
###### B.
$$G(s)= \frac{s+5}{s(s+2)(s+4)}, H(s)=1$$
$$|G(s)| = \frac{|jw+5|}{jw * |jw+2|*|jw+4|}$$
###### Magnitude:
$$\boxed{20log_{10}|G(s)| = \biggr(10log_{10}(w^2+25) - 20log_{10}(w^2) - 20log_{10}(w^2+4) - 10log_{10}(w^2+16)\biggr)}$$
###### Phase: 
$$\boxed{\angle{G(s)} = tan^{-1}(\frac{w}5) - \biggr( 90^{\circ} + tan^{-1}(\frac{w}2) + tan^{-1}(\frac{w}4) \biggr)}$$
###### C.
$$G(s)=\frac{(s+5)(s+3)}{s(s+2)(s+4)}, H(s)=1$$
###### Magnitude:
$$|G(s)| = \frac{|jw+5|*|jw+3|}{|jw|*|jw+2|*|jw+4|}$$
$$\boxed{20log_{10}|G(s)| = 10log_{10}(w^2+25) + 10log_{10}(w^2+9) - \biggr(  
20log_{10}(w^2) + 10log_{10}(w^2+4) + 10log_{10}(w^2+16)\biggr)}$$
###### Phase:
$$\boxed{\angle{G(s)} = tan^{-1}(\frac{w}5) + tan^{-1}(\frac{w}3) - \biggr(  
90^{\circ} + tan^{-1}(\frac{w}2) + tan^{-1}(\frac{w}4)\biggr)}$$
##### 2. Find the Bode diagram (by hand) for each of the following systems.
