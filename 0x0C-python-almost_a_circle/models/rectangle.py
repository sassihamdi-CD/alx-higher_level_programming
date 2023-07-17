#!/usr/bin/python3

from moduls.Base import Base

class Rectangle(Base):
	__width
	__height
	__x
	__y
def __init__(self, width, height, x=0, y=0, id=None):
	self.width = width
	self.height = height
	self.x = x
	self.y = y
	super().__init__(id)

