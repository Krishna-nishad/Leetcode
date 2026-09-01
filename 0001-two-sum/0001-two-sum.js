function twoSum(nums, target) {
    let map = {}; // number -> index

    for (let i = 0; i < nums.length; i++) {
        let required = target - nums[i];

        if (map[required] !== undefined) {
            return [map[required], i];
        }

        map[nums[i]] = i;
    }
}