import turtle

if __name__ == '__main__':
	t = turtle.Turtle()
	wn = turtle.Screen()
	wn.setup(300,300)

	def gotopoint(x,y):
		t.goto(x,y)

	def closeWindow():
		wn.bye()

	wn.onclick(gotopoint)
	wn.onkey(closeWindow,'q')
	wn.listen()
	turtle.mainloop()