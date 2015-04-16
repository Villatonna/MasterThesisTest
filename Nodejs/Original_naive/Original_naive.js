function naiveMultiplier(val)
    -- Creating table object which stores results
    result_table={}
    for i = 0, 9, 1 do
      temp=val*(i+1)
      table.insert(result_table,temp) 
    end
    return result_table
end

local function main()
    res=naiveMultiplier(7)
    print(table.concat(res,","))
end
main()

