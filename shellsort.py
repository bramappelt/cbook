def shellsort(v, n):
    data = [v[:]]
    gap = int(n/2)
    while gap > 0:
        for i in range(gap, n):
            j = i - gap
            while (j >= 0) and (v[j] > v[j+gap]):
                temp = v[j]
                v[j] = v[j+gap]
                v[j+gap] = temp
                j -= gap
                data.append(v[:])
        gap = int(gap / 2)
    return data


if __name__ == '__main__':
    import matplotlib.pyplot as plt

    v = [2, 6, 7, 5, 7, 9, 0, 10, 10, 1]
    n = len(v)

    d = shellsort(v, n)

    fig, ax = plt.subplots(nrows=3, ncols=3)
    ax = ax.flatten()
    for i, j in enumerate(d):
        ax[i].bar(list(range(0, len(j))), j)
    plt.show()
