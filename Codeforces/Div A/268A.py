n = int(input())
home, away = [], []
result = 0
for i in range(n):
    _home, _away = map(int, input().split())
    home.append(_home)
    away.append(_away)

for color in home:
    # print(" hello ",color)
    # print(away.count(color))
    result += away.count(color)

print(result)
