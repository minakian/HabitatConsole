import requests
import sys
import glob
import serial
import time

from tkinter import *
from datetime import datetime

fields = ('ProductID', 'Access Token', 'global1', 'global2', 'global3', 'global4')

def makeform(root, fields):
  entries = {}
  for field in fields:
    row = Frame(root)
    lab = Label(row, width=15, text=field+':', anchor='w')
    ent = Entry(row)
    ent.insert(0,'0')
    row.pack(side=TOP, fill=X, padx=5, pady=1)
    lab.pack(side=LEFT)
    ent.pack(side=LEFT, fill=X)
    entries[field] = ent
  entries['ProductID'].delete(0, END)
  entries['ProductID'].insert(0, '3c0052001751353432393433')

  entries['Access Token'].delete(0, END)
  entries['Access Token'].insert(0, '062798c41c94ae547fbf7a1c983b7b076a34608c')
  return entries

def fetch(entry):
  return

def getGlobal(number, entries):
  if entries['ProductID'] == '0':
    print("Need a product ID")
    return
  if entries['Access Token'] == '0':
    print("Need access token")
    return
  params = (('access_token', entries['Access Token'].get()),)
  link = "https://api.particle.io/v1/devices/%s/global%s" % (entries['ProductID'].get(), number)
  print(link)

  result = requests.get(link, params=params)

  entries['global1'].delete(0,END)
  entries['global1'].insert(0, result.json()['result'])
  return

if __name__ == '__main__':
  root = Tk()
  ents = makeform(root, fields)
  root.bind('<Return>', (lambda event, e=ents: fetch(e)))
  b1 = Button(root, text='Global 1', command=(lambda e=ents: getGlobal(1, e)))
  b1.pack(side=LEFT, padx=5, pady=5)
  root.mainloop()


'''
params = (
    ('access_token', '062798c41c94ae547fbf7a1c983b7b076a34608c'),
)

response = requests.get('https://api.particle.io/v1/devices/3c0052001751353432393433/global3', params=params)

print(response.status_code)

print(response.encoding)

print(response.text)

print(response.json()["result"])
'''