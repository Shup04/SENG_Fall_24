##### Case 1:
$$H(s) = \frac{k}{s+1} $$ $$\text{Close the loop, }H(s)=\frac{k}{s+1+k}$$
- If k=0, the pole is at -1
- if k=2, the pole is -3
- if k=3, the pole is -4
- pushing pole to -inf doesn't work, but it is desirable because it makes the system respond faster. This requires us to find out how hard we can push the system.
---
##### Case 2:
$$H(s)=\frac{k}{(s+1)(s+3)}$$
$$\text{Close the loop, }H(s)=\frac{k}{s^2+4s+3+k}$$
$$s=\frac{-4\pm\sqrt{16-(4)(1)(3+k)}}{2}$$
$$\boxed{s=-2\pm\sqrt{1-k}}$$
- If 0<=k<=1, the pole is real
- If k>1, the pole is imaginary, the higher you go the more osculations.
- The convergence here only depends on the real part 't'.
---
##### Closed Loop Poles

