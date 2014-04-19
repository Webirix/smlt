function line(paths)
path=fs.open(paths,"r")
i= 0
z= 0
local line= {}
local temp= ""
while true do
  
  i= i+1
  z= z+1
  if z == 15000 then sleep(0) z= 0 end
  temp= path.readLine()
  if temp == nil then break end
  line[i]= temp
    
end
return line
end

function parcer(line)
line_p= {}
line_sim= {}
temp= ""
vnut= false
got_line= {}
int= 1
str= ""
teg= ""
   for h=1,#line do
     for g=1,#line[h] do
       temp= string.sub(line[h],g,g)
       if temp == nil then break end
       line_sim[i]= temp
     end
   end
   
   for i=1,line_sim do
	 if line_sim == "<" or vnut == false
	 then
	   vnut= true
	 end
	 if vnut == true 
	 then
	   if line_sim[i] == " "
	   then
		 break
	   else
		 teg= teg..line_sim[i]
	   end
	 end
   end
   arg= ""
   param= ""
	for k=i+1,#line_sim do
	 
	end
end
end

function ap(line,number)

param= ""
arg= ""
stat= false
n= false
for i=1,#line do
if line[i] == "="
then
stat= true
end
if stat= false
then
  arg=arg..line[i]
end
if stat= true
then
  if line ~= nil
  then
	param= param..line[i]
  end
  if line[i] == " "
  then
	for d=i+1,#line do
	  if line[i] == "," or line[i] == ">"
	  then
		n= true
	  end
	end
  end
end
end
if n == true 
then
return arg,param
end
end

function n()
if line ~= nil
then 
else
print("line not found in file ",paths)
end
end


args= {...}
k= {}
k= line(args[1])
parcer(k)
