class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        max_words=0
        for s in sentences:
            words = len(s.split())
            max_words = max(max_words, words)

        return max_words
                