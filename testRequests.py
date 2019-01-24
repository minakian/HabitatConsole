import requests
import sys
import glob
import serial
import time

from tkinter import *
from datetime import datetime

fields = ('ProductID', 'Access Token')
global_vars = ('global1', 'global2', 'global3', 'global4')
local_vars = ('local1', 'local2', 'local3', 'local4', 'local5', 'local6')

def makeform(root, fields):
  entries = {}
  for field in fields:
    row = Frame(root)
    lab = Label(row, width=15, text=field+':', anchor='w')
    ent = Entry(row, width=25)
    ent.insert(0,'0')
    row.pack(side=TOP, fill=X, padx=5, pady=1)
    lab.pack(side=LEFT)
    ent.pack(side=LEFT, expand=YES, fill=X)
    entries[field] = ent
  return entries

def makerow_with_button(root, field):
  row = Frame(root)
  entry = Entry(row, width=25)
  entry.insert(0,'0')
  button = Button(row, width=10, text=fields[i], command=(lambda e=entries : getVariable(i+1, e)))

def makeform_variables(root, fields):
  entries = {}
  for i in range(len(fields)):
    row = Frame(root)
    but = Button(row, width=10, text=fields[i], command=(lambda e=entries : getVariable(i+1, e))) # i is 6 for all buttons
    lab = Label(row, width=15, text=fields[i]+':', anchor='w')
    ent = Entry(row, width=25)
    ent.insert(0,'0')
    row.pack(side=TOP, fill=X, padx=5, pady=1)
    but.pack(side=LEFT)
    lab.pack(side=LEFT)
    ent.pack(side=LEFT, expand=YES, fill=X)
    entries[fields[i]] = ent
  return entries

def getVariable(number, entries):
  print(number)
  for entry in entries:
    print(entry)

def fetch(entry):
  return

def getGlobal(number, entries):
  if entries['ProductID'].get() == '0':
    print("Need a product ID")
    return
  if entries['Access Token'].get() == '0':
    print("Need access token")
    return
  params = (('access_token', entries['Access Token'].get()),)
  link = "https://api.particle.io/v1/devices/%s/global%s" % (entries['ProductID'].get(), number)
  print(link)

  result = requests.get(link, params=params)

  entries['global%s' % (number) ].delete(0,END)
  entries['global%s' % (number)].insert(0, result.json()['result'])
  return

if __name__ == '__main__':
  root = Tk()
  ents = makeform(root, fields)

  ents['ProductID'].delete(0, END)
  ents['ProductID'].insert(0, '3c0052001751353432393433')
  ents['Access Token'].delete(0, END)
  ents['Access Token'].insert(0, '')

  root.bind('<Return>', (lambda event, e=ents: fetch(e)))

  row = Frame(root)
  row.pack(side=TOP, fill=X, padx=5, pady=1)

  b1 = Button(row, text='Global 1', command=(lambda e=ents: getGlobal(1, e)))
  b1.pack(side=LEFT, padx=5, pady=1)
  b2 = Button(row, text='Global 2', command=(lambda e=ents: getGlobal(2, e)))
  b2.pack(side=LEFT, padx=5, pady=1)
  b3 = Button(row, text='Global 3', command=(lambda e=ents: getGlobal(3, e)))
  b3.pack(side=LEFT, padx=5, pady=1)
  b4 = Button(row, text='Global 4', command=(lambda e=ents: getGlobal(4, e)))
  b4.pack(side=LEFT, padx=5, pady=1)
  b5 = Button(row, text='Quit', command=(lambda : quit()))
  b5.pack(side=RIGHT, padx=5, pady=1)

  row2 = Frame(root)
  row2.pack(side=BOTTOM, fill=X, padx=5, pady=1)
  locls = makeform_variables(row2, local_vars)
  root.mainloop()


'''
params = (
    ('access_token', ''),
)

response = requests.get('https://api.particle.io/v1/devices/3c0052001751353432393433/global3', params=params)

print(response.status_code)

print(response.encoding)

print(response.text)

print(response.json()["result"])
'''