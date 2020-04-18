template <typename iterator, typename object>
bool noneOf(iterator begin, iterator end, bool (&function)(object)){
    int count = 0;
    for(auto it = begin; it != end; it = next(it)){
        if(function(*it)){
            count++;
        }
    }
    return count == 0;
}

template <typename iterator, typename object>
bool isSorted(const iterator begin, const iterator end, bool (&f)(object, object)) {
    iterator prev = begin;
    for (auto it = next(begin); it != end; it = next(it)) {
        if (!f(*prev, *it)) {
            return false;
        }
        prev = it;
    }
    return true;
}

template <typename iterator, typename object>
object findNot(iterator begin, iterator end, object v) {
    for (auto it = begin; it != end; it = next(it)) {
        if (*it != v) {
            return *it;
        }
    }
    std::cout << "Все элементы равны заданному\n";
    return object();
}