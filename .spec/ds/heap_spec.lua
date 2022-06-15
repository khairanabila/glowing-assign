describe("Heap", function
    local shuffle = require("random.shuffle")
    local list = {}
    for index = 1, 100 do
        list[index] = index
    end

    shuffle(list)
    local heap = require("ds.heap")
    local nums = heap.new()
    for index = 1, #list do
        nums:push(list[index])
        assert.equal(index, nums:size())
    end
    for index = 1, #list do
        assert.equal(#list - index + 1, nums:size())
        assert.equal(index, nums:top())
        local popped = nums:pop()
        assert.equal(index, popped)
    end
    assert(nums:empty())
end)