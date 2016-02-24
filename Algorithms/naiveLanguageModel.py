import tweepy

class Naive(object):
	def __init__(self):
		self.trainingClass={}
		self.numberOfSentences = 0

	trainingClass = {}
	numberOfSentences = 0

	def setTrainingClass(self, tClass):
		for sentence in tClass:
			if sentence in self.trainingClass:
				self.trainingClass[sentence] = self.trainingClass[sentence] + 1.0
				self.numberOfSentences = self.numberOfSentences+1.0
			else:
				self.trainingClass[sentence] = 1.0
				self.numberOfSentences = self.numberOfSentences+1.0

	def getTrainingClass(self):
		return self.trainingClass

	def calculateP(self):
		for sentence in self.trainingClass:
			print "P for %s is %.2f" % (sentence , (self.trainingClass[sentence]/self.numberOfSentences))

	def pForInputSentence(self, sentence):
			print "P for %s is %.2f" % (sentence , (self.trainingClass[sentence]/self.numberOfSentences))


class TwitterInput(object):
	def __init__(self):
		self.tweetArray = []
		self.auth = 0

	tweetArray = []
	

	def authorizeSelf(self):
		self.auth = tweepy.OAuthHandler("3jV3vPVT0oiMLCVUN6XUYkBJO","rEX9RDGevR5bNMIyn2ayjOOmkeTTt7Q3EjNnjs0TQJOvdSHARK")
		self.auth.set_access_token("436466355-3UJl5wG94U61z2DI2wRqiKWJ0P3ICAJfytpoTrc6", "6DdyH24PIvl7cM1v74faZClH6hy63oxJFOiFVuKUpgYKD")

	def accessTimeLine(self):
		api = tweepy.API(self.auth)
		public_tweets = api.home_timeline()
		for tweet in public_tweets:
			self.tweetArray.append(tweet.text)

	def getTweetArray(self):
		return self.tweetArray



if __name__ == '__main__':
	#Declare and get twitter data
	T1 = TwitterInput()
	T1.authorizeSelf()
	T1.accessTimeLine()

	N1 = Naive()
	#sentences = T1.getTweetArray()
	sentences = ["This is it", "This is awesome"]
	N1.setTrainingClass(sentences)
	sentence = input('Please enter the sentence you want to see P for: ')
	N1.pForInputSentence(sentence)

	
