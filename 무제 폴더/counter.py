import collections as cln

f = open("/Users/kangseunggu/Desktop/BTS_Dynamite_lyrics.txt")

f = f.readlines()
t = ''.join(f)

freq = cln.Counter(t.split())
print(freq)

cc = cln.Counter({"red" : 4, "black" : 3})
print(list(cc.elements()))

dd = cln.Counter(red=3, black=4)
print(list(dd.elements()))

ee = dd + cc
print(list(ee.elements()))

ee.subtract(cc)
print(list(ee.elements()))

