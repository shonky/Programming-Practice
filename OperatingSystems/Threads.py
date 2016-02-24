import thread
import time
import threading

exitFlag = 0
class myThread(threading.Thread):
	def __init__(self, threadID, name, counter):
		threading.Thread.__init__(self)
		self.threadID = threadID
		self.name = name
		self.counter = counter

	def run(self):
		print "Starting " + self.name
		threadLock.acquire()
		print_time(self.name, self.counter, 5)
		threadLock.release()
		print "Exiting "+self.name

def print_time(threadName, delay, counter):
	while counter:
		time.sleep(delay)
		print "%s: %s" % (threadName, time.ctime(time.time()))
		counter -=1



if __name__ == '__main__':

	def add(x,y):
		count = 0
		print(x+y)
		while count < 5:
			time.sleep(y)
			count+=1


	def subtract(x,y):
		count = 0
		print(x-y)
		while count < 5:
			time.sleep(y)
			count+=1

	try:
		threadLock = threading.Lock()
		threads = []

		thread1 = myThread(1, "Thread-1", 1)
		thread2 = myThread(2, "Thread-2", 2)

		thread1.start()
		thread2.start()

		threads.append(thread1)
		threads.append(thread2)

		for t in threads:
			t.join()



	except:
		print "Unable to produce threads"
		