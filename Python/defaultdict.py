import collections as cln
import pandas as pd

def undefined_key():
    return "해당 자료 없음"

#defaultDict : 키 값이 없을 때 반환할 값을 지정하는 함수
d = cln.defaultdict(undefined_key)
d['a'] = 1
d['b'] = 2
print(d['a'], d['b'], d['c'])

def myMean(*x):
    return sum(x)/len(x)

print(myMean(1,2,3,4,5,6))

df1 = pd.DataFrame({
    "var1" : [1, 2, 4, 4],
    "var2" : [3, 4, 5, 6],
    "var3" : [5, 6, 7, 8]
}, index = ['h', 'j', 'k', 's'])

df1.to_csv("hi.csv")