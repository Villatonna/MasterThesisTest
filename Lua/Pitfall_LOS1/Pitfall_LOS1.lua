function naiveMultiplier(val,userInput)
    result_table={}
    for i = 0, userInput, 1 do
      temp=val*(i+1)
      table.insert(result_table,temp) 
    end
    return result_table
end

local function main()
    stockpile={}
    userInput=1
    while 1 do
	Input = io.read()
	if Input == "0" then 
		break
	end
	res=naiveMultiplier(7,Input)
	print(table.concat(res,","))
	table.insert(stockpile,res)
    end
    print(table.maxn(stockpile))
end
main()
