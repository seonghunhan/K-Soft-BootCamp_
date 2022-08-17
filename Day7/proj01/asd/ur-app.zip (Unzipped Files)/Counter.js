import { useEffect } from "react";

function Counter(props){

    const [cnt, setCnt] = useState(0);
    const [isKoran, setIsKorean] = useState(true);

    useEffect(
        ()=>{document.title = `총 ${cnt}번 클릭했습니다.`;}
    ,[isKoran, cnt]
    );

    return(
        <div>
            <p>총 {cnt}번 클릭했습니다.</p>
            <button onClick = { () => setCnt(cnt+1)}></button>
            <button onClick = { () => setIsKorean(false)}></button>

        </div>
    )
}