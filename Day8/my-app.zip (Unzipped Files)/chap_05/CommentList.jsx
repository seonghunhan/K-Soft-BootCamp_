import React from "react";
import Comment from "./Comment";

const comments = [
    {
        name : "김인하",
        comment : "우영우 재밌어요!"
    },
    {
        name : "박인하",
        comment : "본방사수~"
    },
    {
        name : "박은빈",
        comment : "감사합니다..."
    },
]

function CommentList(props){
    return (
        <div>
            {comments.map(
                (comment)=>{
                    return (<Comment name={comment.name} comment={comment.comment} />);
                }
            )}
        </div>
    );
}
export default CommentList;