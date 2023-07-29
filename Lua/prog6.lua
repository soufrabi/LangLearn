io.write("Enter your age : ")
age = io.read("*n")

if age<16 then
    io.write("You can go to school","\n")
    local localVar=10
elseif age>=16 and age<=18 then
    print("You can drive")
else
    print("You can vote")
end
