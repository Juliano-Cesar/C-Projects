local org = {};
print("Digite a quantidade de números a serem organizados: \n");
local quant = io.read("*n");
print("Números organizados: \n")

for i = 1,quant do
    table.insert(org, io.read("*n"))
end

for i,v in pairs(org) do
    for x = 1,#org do
      if org[i] > org[x] then
        local y = org[i]
        org[i] = org[x]
        org[x] = y
      end
  end
end

for i,v in pairs(org) do
      print(v)
end