n = 10
x = [1:1:n]
y = [1:1:n]

i=1
while i<=n
   y(i) = e^(x(i))
   i=i+1
end

figure(2)
plot(x,y,'.r')
set(gca,"linewidth",4,"fontsize",12)
hold on
grid on
title('Plot y vs x')
xlabel('Variable x')
ylabel('Variable y')
axis([-10 n+10 ])
