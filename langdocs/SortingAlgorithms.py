class Student:
    def __init__(self, id, score):
        self.id = id
        self.score = score
    def __str__(self):
        return str(self.id) + "\t" + str(self.score)
    def __lt__(self, other):
        return self.score < other.score
