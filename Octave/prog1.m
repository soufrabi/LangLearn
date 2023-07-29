x = linspace(1,100,100)
y = (x+3).^2



plot(x,y,'or')
set(gca,"linewidth",4,"fontsize",12)
hold on
grid on
title('Plot y vs x')
xlabel('Variable x')
ylabel('Variable y')
%axis([-10 100 0 100])
axis([-10 100])
