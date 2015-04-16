function naiveMultiplier(val,userInput) 
    result_table={} 
    for i = 0, userInput, 1 do 
      temp=val*(i+1) 
      table.insert(result_table,temp) 
    end 
    return result_table 
end 

local function main() 
    userInput = io.read() 
    res=naiveMultiplier(7,userInput) 
    print(table.concat(res,",")) 
end 
main()
