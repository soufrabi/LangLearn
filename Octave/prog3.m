x = [-1:0.05:2]
y= x

i = 1
while i<=length(x)
  y(i) = e^(-x(i))
  i=i+1
end


%set(gcf,'Color','black')

plot(x,y)
