import React, { useState, useEffect } from "react";
import useCounter from "./useCounter";

const MAX_CAPACITY = 10;
const MIN_CAPACITY = 0;

function Accommodate(props) {
    const [isFull, setIsFull] = useState(false);
    const [isEmpty, setIsEmpty] = useState(false);
    const [count, increaseCount, decreaseCount] = useCounter(0);// custom hook

    useEffect(() => {
        console.log("======================");
        console.log("useEffect() is called.");
        console.log(`isFull: ${isFull}`);
        console.log(`isEmpty: ${isEmpty}`);
    });

    useEffect(() => {
        setIsFull(count >= MAX_CAPACITY);
        setIsEmpty(count <= MIN_CAPACITY);
        console.log(`Current count value: ${count}`);
    }, [count]);

    return (
        <div style={{ padding: 16 }}>
            <p>{`총 ${count}명 수용했습니다.`}</p>

            <button onClick={increaseCount} disabled={isFull}>
                입장
            </button>
            <button onClick={decreaseCount} disabled={isEmpty}>퇴장</button>

            {isFull && <p style={{ color: "red" }}>정원이 가득찼습니다.</p>}
            {isEmpty && <p style={{ color: "blue" }}>정원 미달입니다.</p>}
        </div>
    );
}

export default Accommodate;
