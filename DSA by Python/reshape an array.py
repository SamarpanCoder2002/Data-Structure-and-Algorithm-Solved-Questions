import numpy
N = input("Enter 9 numbers separted by space: ").split(" ")
N = numpy.array(N,int)
print(numpy.reshape(N,(3,3)))


