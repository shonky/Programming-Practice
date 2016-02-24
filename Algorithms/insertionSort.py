class InsertionSort(object):
	def __init__(self):
		array = []
		key = 1
		temp = 1

	array = []	
	key = 1
	temp = 1

	def setArray(self, sArray):
		self.array = sArray

	def swap(self, keyI1, keyI2):
		temp1 = self.array[keyI1]
		self.array[keyI1] = self.array[keyI2]
		self.array[keyI2] = temp1
		temp1 = 0

		#include binary search for the comparision in the sort
	def sort(self):
		for i in range(len(self.array)-1):
			if self.temp-1>=0 and self.temp<len(self.array):
				if self.array[self.temp] < self.array[self.temp-1]:
					self.swap(self.temp,self.temp-1)
					self.temp = self.temp-1
					self.sort()
				else:
						self.key = self.key + 1
						self.temp = self.key
			else:
				self.key = self.key +1
				self.temp = self.key







if __name__ == '__main__':
	I1 = InsertionSort()
	a = [5,4,3,2,1,10,20,6]
	I1.setArray(a)
	I1.sort()
	print I1.array 