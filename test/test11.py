def overlap_pyramid(rows):
    start = 1
    built_rows = []
    for r in range(1, rows + 1):
        how_many = 2 * r - 1  # 1, 3, 5, ...
        row_nums = []
        for _ in range(how_many):
            row_nums.append(str(start))
            start += 1
        built_rows.append(row_nums)
        # after each row except last, step back 1 so next row repeats last number
        start -= 1

    # center width using final row
    last_row_str = " ".join(built_rows[-1])
    width = len(last_row_str)

    for row in built_rows:
        line = " ".join(row)
        print(line.center(width))

# Example:
overlap_pyramid(10)
