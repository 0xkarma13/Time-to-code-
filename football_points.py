# Football Points
# Each win gives 3 points, each draw gives 1 point, a loss gives 0.
# Input: w e l (wins, draws, losses)
# Output: total points = w * 3 + e

w, e, l = map(int, input().split())
print(w * 3 + e)
