class Solution:
    def numMatchingSubseq(self, s: str, words: List[str]) -> int:
        positions = defaultdict(list)

        # Store indices of each character
        for i, ch in enumerate(s):
            positions[ch].append(i)

        ans = 0

        for word in words:

            prev_index = -1
            found = True

            for ch in word:

                # Character not present
                if ch not in positions:
                    found = False
                    break

                index_list = positions[ch]

                # Find first index > prev_index
                pos = bisect_right(index_list, prev_index)

                # No valid next position
                if pos == len(index_list):
                    found = False
                    break

                # Update previous index
                prev_index = index_list[pos]

            if found:
                ans += 1

        return ans