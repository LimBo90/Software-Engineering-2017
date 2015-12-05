class Person
  #have a first_name and last_name attribute with public accessors
  attr_accessor :first_name,:last_name
  
  #have a class attribute called `people` that holds an array of objects
  @@people = []

  #have an `initialize` method to initialize each instance
  def initialize(first_name,last_name)#should take 2 parameters for first_name and last_name
    #assign those parameters to instance variables
    @first_name = first_name
    @last_name = last_name
    #add the created instance (self) to people class variable
    @@people.push(self)
  end

  #have a `search` method to locate all people with a matching `last_name`
  def self.search(last_name)
    #accept a `last_name` parameter
    #search the `people` class attribute for instances with the same `last_name`
    #return a collection of matching instances
    @@people.select{ |person| person.last_name == last_name }.map { |person|  person.to_s}
  end

  #have a `to_s` method to return a formatted string of the person's name
  def to_s
    return "#{self.first_name} #{self.last_name}"
  end

  def self.people
  	return @@people
  end
end

p1 = Person.new("John", "Smith")
p2 = Person.new("John", "Doe")
p4 = Person.new("Cool", "Dude")
p3 = Person.new("Jane", "Smith")

#Person.people.each { |person| puts "#{person.first_name} #{person.last_name}" }

puts Person.search("Smith")
# Should print out
# => John Smith
# => Jane Smith