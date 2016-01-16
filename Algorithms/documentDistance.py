class DocumentDistance(object):
	def __init__(self):
		self.D1 = ""
		self.D2 = ""

	#names of the files themselves
	D1 = ""
	D2 = ""

	#Create dictionaries for frequencies of each word
	d1WordFrequencies = {}
	d2WordFrequencies = {}

	dotProduct = 0

	def inputDocNames(self):
		self.D1 = input('Please enter the name of the first Document: ')
		self.D2 = input('Please enter the name of the second Document: ')

	def setD1(self, D1):
		self.D1 = D1

	def setD2(self, D2):
		self.D2 = D2

	def getD1(self):
		return self.D1

	def getD2(self):
		return self.D2

	def splitDocuments(self, D1 , D2):
		d1Split = D1.split()
		d2Split = D2.split()

		for word in d1Split:
			if word in self.d1WordFrequencies:
				self.d1WordFrequencies[word] = self.d1WordFrequencies[word]+1
			else:
				self.d1WordFrequencies[word] = 1

		for word in d2Split:
			if word in self.d2WordFrequencies:
				self.d2WordFrequencies[word] = self.d2WordFrequencies[word]+1
			else:
				self.d2WordFrequencies[word] = 1

	def computeDotProdcut(self, D1, D2):
		for element in self.d1WordFrequencies:
			if element in self.d2WordFrequencies:
				self.dotProduct += self.d1WordFrequencies[element]*self.d2WordFrequencies[element]
			





if __name__ == '__main__':
	D = DocumentDistance()
	D.inputDocNames()
	D.splitDocuments(D.D1,D.D2)
	D.computeDotProdcut(D.D1, D.D2)
	print D.dotProduct
	