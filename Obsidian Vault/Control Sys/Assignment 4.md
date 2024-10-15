#### 1.
###### (a)
$$T(s)=\frac{6}{s+7}$$
$$t(t) = 6e^{7t}$$
---
###### (b)
$$T(s)=\frac{8}{(s+8)(s+9)} = \frac{8}{s^2+17s+72}$$
poles at s = -8, -9
$$s^2+17s+72=s^2+2\zeta\omega_n+\omega_n^2$$
$$2\zeta\omega_n = 17\text{ and }\omega_n^2 = 72$$
$$\boxed{\omega_n = 8.485\text{ and }\zeta = 1.002}$$
since the damping ratio is slightly greater than 1, the system is slightly overdamped.

---
###### (c)
$$T(s)=\frac{11(s+7)}{(s+10)(s+20)}=\frac{11s+77}{s^2+30s+200}$$
Poles at s = -10, -20
Zeros at s = -7
$$s^2+30s+200 = s^2+2\zeta\omega_ns+\omega_n$$
$$2\zeta\omega_n = 30\text{ and }\omega_n^2=200$$
$$\omega_n=14.142\text{ and }\zeta=1.061$$
Since the damping ratio is slightly greater than 1, the system is slightly overdamped.

---
###### (d)
$$T(s)=\frac{21}{s^2+6s+144}$$
Poles at s = (-3 + 11.619j), (-3 - 11.619j)
$$s^2+6s+144 = s^2+2\zeta\omega_ns+\omega_n$$
$$2\zeta\omega_n = 6\text{ and }\omega_n^2=144$$
$$\omega_n=12\text{ and } \zeta=0.25$$
Since the damping ratio is less than 1, the system is underdamped.

---
###### (e)
$$T(s)=\frac{s+2}{s^2+0s+9}$$
Poles at s = 3j, -3j
$$s^2+0s+9= s^2+2\zeta\omega_ns+\omega_n$$
$$2\zeta\omega_ns=0\text{ and }\omega_n^2=9$$
$$\omega_n=3\text{ and }\zeta=0$$
Since the damping frequency is less than 1, is is underdamped. Since it is 0, the damping frequency is equal to the natural frequency.

---
###### (f)
$$T(s)=\frac{s+5}{(s+10)^2}=\frac{s+5}{s^2+20s+100}$$
Poles at s = -10, -10
$$ s^2+20s+100=s^2+2\zeta\omega_ns+\omega_n$$
$$2\zeta\omega_n=20\text{ and }\omega_n^2=100$$
$$\omega_n=10\text{ and }\zeta=1$$
Since the damping ratio is equal to 1, it is critically damped.

---
#### 2.
$$\zeta=0.5\text{, }\omega_n=100\frac{rad}{s}\text{, }dc gain=1$$
$$T(s)=\frac{100^2}{s^2+(2)(0.5)(100)s+100^2}$$
$$=\frac{10000}{s^2+100s+10000}$$
$$\text{Step input in laplace domain, }X(s)=\frac1s$$
$$\frac{Y(s)}{X(s)} = T(s) = \frac{10000}{s^2+100s+10000}$$
$$Y(s) = X(s)T(s) = \frac{10000}{s(s^2+100s+10000)}$$
$$Y(s) = \frac{10000}{s(s^2+100s+10000)} = \frac{A}s+\frac{Bs+C}{s^2+100+10000}$$
$$10000 = A(s^2+100s+10000)+s(Bs+C)$$
$$10000 = As^2+100As+10000A+Bs^2+Cs$$
$$10000 = s^2(A+B)+s(100A+C)+10000A$$
$$A+B=0\Rightarrow B=-A$$
$$100A+C=0\Rightarrow C=-100A$$
$$10000A=10000\Rightarrow A=1$$
$$\boxed{A=1,B=-1,C=-100}$$
$$Y(s) = \frac{1}s-\frac{s+100}{s^2+100+10000}$$
$$Y(s) = \frac{1}s-\frac{s+100}{(s+50)^2+7500}$$
$$\text{Let u}=s+50$$
$$Y(s) = \frac{1}s-\frac{u+50}{u^2+7500}$$
$$Y(s) = \frac{1}s-\frac{u}{u^2+7500}-\frac{50}{u^2+7500}$$
$$Y(s) = \frac{1}s-\frac{u}{u^2+7500}-\frac{50}{\sqrt{7500}}\frac{\sqrt{7500}}{u^2+7500}$$
$$\boxed{y(t)=u(t)-e^{-50t}\biggr(\cos(\sqrt{7500}t)-\frac{50}{\sqrt{7500}}\sin(7500)\biggr)}$$
***
#### 3.
###### (a)
$$T(s)=\frac{16}{s^2+3s+16}$$
$$\omega_n=4\text{ and }\zeta=0.375$$
$$T_p=\frac{\pi}{\omega_n\sqrt{1-\zeta^2}} = 0.847$$
$$\%OS=e^{-\frac{\zeta\pi}{\sqrt{1-\zeta^2}}}*100\% = 28.0\%$$
$$T_s=\frac{4}{\zeta\omega_n}=2.666$$
$$T_r=\frac{\pi-\theta}{\sqrt{1-\zeta^2}}=0.536$$
***
###### (b)
$$T(s)=\frac{1.05*10^7}{s^2+1.6*10^3s+10^7}$$
$$\omega_n=3162.278\text{ and }\zeta=0.253$$
$$T_p=\frac{\pi}{\omega_n\sqrt{1-\zeta^2}} = 0.00103$$
$$\%OS=e^{-\frac{\zeta\pi}{\sqrt{1-\zeta^2}}}*100\% = 44\%$$
$$T_s=\frac{4}{\zeta\omega_n}=0.005$$
$$T_r=\frac{\pi-\theta}{\sqrt{1-\zeta^2}}=1.65$$
***
#### 4.
###### (a)
$$\%OS=13\%\text{ and }T_s=0.8s$$
$$T_s=0.8=\frac{4}{\zeta\omega_n}$$
$$\boxed{\zeta\omega_n=5}$$
$$OS=0.13=e^{-\frac{\zeta\pi}{\sqrt{1-\zeta^2}}}$$
$$2.04=\frac{\zeta\pi}{\sqrt{1-\zeta^2}}$$
$$\boxed{0.649=\frac{\zeta}{\sqrt{1-\zeta^2}}}$$
$$\zeta=0.544\text{ and }\omega_n=9.19$$
$$s^2+2\zeta\omega_ns+\omega_n^2 = s^2 + 10s+84.46$$
Poles at s = (-5+7.711j), (-5-7.711j) 
***
###### (b)
$$T_s=6\text{ and }T_p=3$$
$$T_s=6=\frac{4}{\zeta\omega_n}$$
$$\zeta\omega_n=\frac23$$
$$\boxed{\zeta-\frac23\omega_n=0}$$
$$T_p=3=\frac{\pi}{\omega_n\sqrt{1-\zeta^2}}$$
$$3\sqrt{1-\zeta^2}=\frac{\pi}{\omega_n}$$
$$9(1-\zeta^2)=\frac{\pi^2}{\omega_n^2}$$
$$9-9\zeta^2=\frac{\pi^2}{\omega_n^2}$$
$$\zeta=0.537\text{ and }\omega_n=1.241$$
$$s^2+2\zeta\omega_ns+\omega_n^2 = s^2 + 1.33s+1.54$$
$$\boxed{\text{Poles at }s=\biggr(-\frac{133}{200}+1.048j\biggr)\text{, }\biggr(-\frac{133}{200}-1.048j\biggr)}$$
***
#### 5.
$$T(s)=\frac{14.145}{(s^2+0.842s+2.829)(s+5)}=\frac{14.145}{s^3+5.842s^2+7.052s+14.145}$$
poles at s= -5, (-0.422-1.62j), (-0.411+1.62j)
$$\zeta\omega_n=0.422$$
$$\omega_n\sqrt{1-\zeta^2}=1.62$$
$$\omega_n=1.682\text{ and }\zeta=0.25$$

$$T_p=\frac{\pi}{\omega_n\sqrt{1-\zeta^2}} = 1.93$$
$$\%OS=e^{-\frac{\zeta\pi}{\sqrt{1-\zeta^2}}}*100\% = 44.4\%$$
$$T_s=\frac{4}{\zeta\omega_n}=9.51$$
$$T_r=\frac{\pi-\theta}{\sqrt{1-\zeta^2}}=1.88$$
$$K_p=\lim_{s\to0}\frac{14.145}{s(s^2+5.842s+7.052)}=\propto$$

$$K_v=\lim_{s\to0}\frac{14.145}{s^2+5.842s+7.052}=2.01$$
$$K_a=\lim_{s\to0}\frac{14.145s}{s^2+5.842s+7.052}=0$$
$$e_{ss}=\frac{1}{1+K_p}=0$$
$$e_{ss}=\frac{1}{K_v}=0.498$$
$$e_{ss}=\frac{1}{K_a}=\propto$$
