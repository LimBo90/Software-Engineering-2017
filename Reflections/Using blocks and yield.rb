x = 0
def times(n)
	for i in 0..n  
		yield(i)
	end
end


times(5){|i| puts "wow #{i}"}
times(5){puts "wow"}